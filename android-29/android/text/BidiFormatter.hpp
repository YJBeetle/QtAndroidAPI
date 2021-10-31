#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace android::text
{
	class BidiFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BidiFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(jboolean arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jboolean getStereoReset();
		jboolean isRtl(jstring arg0);
		jboolean isRtlContext();
		jstring unicodeWrap(jstring arg0);
		jstring unicodeWrap(jstring arg0, __JniBaseClass arg1);
		jstring unicodeWrap(jstring arg0, jboolean arg1);
		jstring unicodeWrap(jstring arg0, __JniBaseClass arg1, jboolean arg2);
	};
} // namespace android::text

