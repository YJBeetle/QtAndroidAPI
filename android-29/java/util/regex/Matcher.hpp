#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuffer;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util::regex
{
	class Matcher : public __JniBaseClass
	{
	public:
		// Fields
		
		Matcher(QAndroidJniObject obj);
		// Constructors
		Matcher() = default;
		
		// Methods
		static jstring quoteReplacement(jstring arg0);
		static jstring quoteReplacement(const QString &arg0);
		QAndroidJniObject appendReplacement(java::lang::StringBuffer arg0, jstring arg1);
		QAndroidJniObject appendReplacement(java::lang::StringBuffer arg0, const QString &arg1);
		QAndroidJniObject appendReplacement(java::lang::StringBuilder arg0, jstring arg1);
		QAndroidJniObject appendReplacement(java::lang::StringBuilder arg0, const QString &arg1);
		QAndroidJniObject appendTail(java::lang::StringBuffer arg0);
		QAndroidJniObject appendTail(java::lang::StringBuilder arg0);
		jint end();
		jint end(jint arg0);
		jint end(jstring arg0);
		jint end(const QString &arg0);
		jboolean find();
		jboolean find(jint arg0);
		jstring group();
		jstring group(jint arg0);
		jstring group(jstring arg0);
		jstring group(const QString &arg0);
		jint groupCount();
		jboolean hasAnchoringBounds();
		jboolean hasTransparentBounds();
		jboolean hitEnd();
		jboolean lookingAt();
		jboolean matches();
		QAndroidJniObject pattern();
		QAndroidJniObject region(jint arg0, jint arg1);
		jint regionEnd();
		jint regionStart();
		jstring replaceAll(jstring arg0);
		jstring replaceAll(const QString &arg0);
		jstring replaceAll(__JniBaseClass arg0);
		jstring replaceFirst(jstring arg0);
		jstring replaceFirst(const QString &arg0);
		jstring replaceFirst(__JniBaseClass arg0);
		jboolean requireEnd();
		QAndroidJniObject reset();
		QAndroidJniObject reset(jstring arg0);
		QAndroidJniObject reset(const QString &arg0);
		QAndroidJniObject results();
		jint start();
		jint start(jint arg0);
		jint start(jstring arg0);
		jint start(const QString &arg0);
		QAndroidJniObject toMatchResult();
		jstring toString();
		QAndroidJniObject useAnchoringBounds(jboolean arg0);
		QAndroidJniObject usePattern(java::util::regex::Pattern arg0);
		QAndroidJniObject useTransparentBounds(jboolean arg0);
	};
} // namespace java::util::regex

