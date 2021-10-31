#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::util
{
	class SizeF : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SizeF(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SizeF(QJniObject obj);
		
		// Constructors
		SizeF(jfloat arg0, jfloat arg1);
		
		// Methods
		static android::util::SizeF parseSizeF(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jfloat getHeight();
		jfloat getWidth();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::util

