#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class Signature : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Signature(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Signature(QJniObject obj);
		
		// Constructors
		Signature(jbyteArray arg0);
		Signature(jstring arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jbyteArray toByteArray();
		jcharArray toChars();
		jcharArray toChars(jcharArray arg0, jintArray arg1);
		jstring toCharsString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

