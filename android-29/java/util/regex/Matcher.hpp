#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::java::util::regex
{
	class Matcher : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring quoteReplacement(jstring arg0);
		static jstring quoteReplacement(const QString &arg0);
		QAndroidJniObject appendReplacement(__jni_impl::java::lang::StringBuffer arg0, jstring arg1);
		QAndroidJniObject appendReplacement(__jni_impl::java::lang::StringBuffer arg0, const QString &arg1);
		QAndroidJniObject appendReplacement(__jni_impl::java::lang::StringBuilder arg0, jstring arg1);
		QAndroidJniObject appendReplacement(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1);
		QAndroidJniObject appendTail(__jni_impl::java::lang::StringBuffer arg0);
		QAndroidJniObject appendTail(__jni_impl::java::lang::StringBuilder arg0);
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
		jstring replaceAll(__jni_impl::__JniBaseClass arg0);
		jstring replaceFirst(jstring arg0);
		jstring replaceFirst(const QString &arg0);
		jstring replaceFirst(__jni_impl::__JniBaseClass arg0);
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
		QAndroidJniObject usePattern(__jni_impl::java::util::regex::Pattern arg0);
		QAndroidJniObject useTransparentBounds(jboolean arg0);
	};
} // namespace __jni_impl::java::util::regex

#include "../../lang/StringBuffer.hpp"
#include "../../lang/StringBuilder.hpp"
#include "./Pattern.hpp"

namespace __jni_impl::java::util::regex
{
	// Fields
	
	// Constructors
	void Matcher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.Matcher",
			"(V)V");
	}
	
	// Methods
	jstring Matcher::quoteReplacement(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Matcher",
			"quoteReplacement",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::quoteReplacement(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Matcher",
			"quoteReplacement",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Matcher::appendReplacement(__jni_impl::java::lang::StringBuffer arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Matcher::appendReplacement(__jni_impl::java::lang::StringBuffer arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Matcher::appendReplacement(__jni_impl::java::lang::StringBuilder arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Matcher::appendReplacement(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Matcher::appendTail(__jni_impl::java::lang::StringBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Matcher::appendTail(__jni_impl::java::lang::StringBuilder arg0)
	{
		return __thiz.callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object()
		);
	}
	jint Matcher::end()
	{
		return __thiz.callMethod<jint>(
			"end",
			"()I"
		);
	}
	jint Matcher::end(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"end",
			"(I)I",
			arg0
		);
	}
	jint Matcher::end(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"end",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Matcher::end(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"end",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Matcher::find()
	{
		return __thiz.callMethod<jboolean>(
			"find",
			"()Z"
		);
	}
	jboolean Matcher::find(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"find",
			"(I)Z",
			arg0
		);
	}
	jstring Matcher::group()
	{
		return __thiz.callObjectMethod(
			"group",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Matcher::group(jint arg0)
	{
		return __thiz.callObjectMethod(
			"group",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::group(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"group",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::group(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"group",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint Matcher::groupCount()
	{
		return __thiz.callMethod<jint>(
			"groupCount",
			"()I"
		);
	}
	jboolean Matcher::hasAnchoringBounds()
	{
		return __thiz.callMethod<jboolean>(
			"hasAnchoringBounds",
			"()Z"
		);
	}
	jboolean Matcher::hasTransparentBounds()
	{
		return __thiz.callMethod<jboolean>(
			"hasTransparentBounds",
			"()Z"
		);
	}
	jboolean Matcher::hitEnd()
	{
		return __thiz.callMethod<jboolean>(
			"hitEnd",
			"()Z"
		);
	}
	jboolean Matcher::lookingAt()
	{
		return __thiz.callMethod<jboolean>(
			"lookingAt",
			"()Z"
		);
	}
	jboolean Matcher::matches()
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"()Z"
		);
	}
	QAndroidJniObject Matcher::pattern()
	{
		return __thiz.callObjectMethod(
			"pattern",
			"()Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Matcher::region(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"region",
			"(II)Ljava/util/regex/Matcher;",
			arg0,
			arg1
		);
	}
	jint Matcher::regionEnd()
	{
		return __thiz.callMethod<jint>(
			"regionEnd",
			"()I"
		);
	}
	jint Matcher::regionStart()
	{
		return __thiz.callMethod<jint>(
			"regionStart",
			"()I"
		);
	}
	jstring Matcher::replaceAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"replaceAll",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::replaceAll(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"replaceAll",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Matcher::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"replaceAll",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Matcher::replaceFirst(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"replaceFirst",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::replaceFirst(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"replaceFirst",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Matcher::replaceFirst(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"replaceFirst",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean Matcher::requireEnd()
	{
		return __thiz.callMethod<jboolean>(
			"requireEnd",
			"()Z"
		);
	}
	QAndroidJniObject Matcher::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/util/regex/Matcher;"
		);
	}
	QAndroidJniObject Matcher::reset(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"reset",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	QAndroidJniObject Matcher::reset(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"reset",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Matcher::results()
	{
		return __thiz.callObjectMethod(
			"results",
			"()Ljava/util/stream/Stream;"
		);
	}
	jint Matcher::start()
	{
		return __thiz.callMethod<jint>(
			"start",
			"()I"
		);
	}
	jint Matcher::start(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"start",
			"(I)I",
			arg0
		);
	}
	jint Matcher::start(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"start",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Matcher::start(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"start",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Matcher::toMatchResult()
	{
		return __thiz.callObjectMethod(
			"toMatchResult",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	jstring Matcher::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Matcher::useAnchoringBounds(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"useAnchoringBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	QAndroidJniObject Matcher::usePattern(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"usePattern",
			"(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Matcher::useTransparentBounds(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"useTransparentBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
} // namespace __jni_impl::java::util::regex

namespace java::util::regex
{
	class Matcher : public __jni_impl::java::util::regex::Matcher
	{
	public:
		Matcher(QAndroidJniObject obj) { __thiz = obj; }
		Matcher()
		{
			__constructor();
		}
	};
} // namespace java::util::regex

