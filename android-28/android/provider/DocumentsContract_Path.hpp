#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::provider
{
	class DocumentsContract_Path : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Path(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Path(QJniObject obj);
		
		// Constructors
		DocumentsContract_Path(jstring arg0, JObject arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getPath();
		jstring getRootId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::provider

