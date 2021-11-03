#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::service::autofill
{
	class SavedDatasetsInfo : public JObject
	{
	public:
		// Fields
		static JString TYPE_OTHER();
		static JString TYPE_PASSWORDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SavedDatasetsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SavedDatasetsInfo(QAndroidJniObject obj);
		
		// Constructors
		SavedDatasetsInfo(JString arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCount() const;
		JString getType() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::service::autofill

