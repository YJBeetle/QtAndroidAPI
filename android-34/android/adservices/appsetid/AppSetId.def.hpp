#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::adservices::appsetid
{
	class AppSetId : public JObject
	{
	public:
		// Fields
		static jint SCOPE_APP();
		static jint SCOPE_DEVELOPER();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSetId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSetId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSetId(JString arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getId() const;
		jint getScope() const;
		jint hashCode() const;
	};
} // namespace android::adservices::appsetid

