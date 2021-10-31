#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult;
}
namespace android::icu::text
{
	class Normalizer2_Mode;
}
namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class StringBuilder;
}

namespace android::icu::text
{
	class Normalizer2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer2(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance(java::io::InputStream arg0, jstring arg1, android::icu::text::Normalizer2_Mode arg2);
		static QAndroidJniObject getNFCInstance();
		static QAndroidJniObject getNFDInstance();
		static QAndroidJniObject getNFKCCasefoldInstance();
		static QAndroidJniObject getNFKCInstance();
		static QAndroidJniObject getNFKDInstance();
		QAndroidJniObject append(java::lang::StringBuilder arg0, jstring arg1);
		jint composePair(jint arg0, jint arg1);
		jint getCombiningClass(jint arg0);
		jstring getDecomposition(jint arg0);
		jstring getRawDecomposition(jint arg0);
		jboolean hasBoundaryAfter(jint arg0);
		jboolean hasBoundaryBefore(jint arg0);
		jboolean isInert(jint arg0);
		jboolean isNormalized(jstring arg0);
		QAndroidJniObject normalize(jstring arg0, __JniBaseClass arg1);
		jstring normalize(jstring arg0);
		QAndroidJniObject normalize(jstring arg0, java::lang::StringBuilder arg1);
		QAndroidJniObject normalizeSecondAndAppend(java::lang::StringBuilder arg0, jstring arg1);
		QAndroidJniObject quickCheck(jstring arg0);
		jint spanQuickCheckYes(jstring arg0);
	};
} // namespace android::icu::text

