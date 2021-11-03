#pragma once

#include "../../JObject.hpp"
#include "./BaseBundle.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace android::os
{
	class PersistableBundle : public android::os::BaseBundle
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::os::PersistableBundle EMPTY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PersistableBundle(const char *className, const char *sig, Ts...agv) : android::os::BaseBundle(className, sig, std::forward<Ts>(agv)...) {}
		PersistableBundle(QAndroidJniObject obj);
		
		// Constructors
		PersistableBundle();
		PersistableBundle(android::os::PersistableBundle &arg0);
		PersistableBundle(jint arg0);
		
		// Methods
		static android::os::PersistableBundle readFromStream(java::io::InputStream arg0);
		jobject clone();
		android::os::PersistableBundle deepCopy();
		jint describeContents();
		android::os::PersistableBundle getPersistableBundle(jstring arg0);
		void putPersistableBundle(jstring arg0, android::os::PersistableBundle arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
		void writeToStream(java::io::OutputStream arg0);
	};
} // namespace android::os

