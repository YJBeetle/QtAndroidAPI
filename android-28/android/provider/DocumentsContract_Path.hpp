#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::provider
{
	class DocumentsContract_Path : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Path(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Path(QAndroidJniObject obj);
		
		// Constructors
		DocumentsContract_Path(JString arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getPath() const;
		JString getRootId() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::provider

