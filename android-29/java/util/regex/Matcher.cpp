#include "../../lang/StringBuffer.hpp"
#include "../../lang/StringBuilder.hpp"
#include "./Pattern.hpp"
#include "./Matcher.hpp"

namespace java::util::regex
{
	// Fields
	
	// QAndroidJniObject forward
	Matcher::Matcher(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
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
	QAndroidJniObject Matcher::appendReplacement(java::lang::StringBuffer arg0, jstring arg1)
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Matcher::appendReplacement(java::lang::StringBuilder arg0, jstring arg1)
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Matcher::appendTail(java::lang::StringBuffer arg0)
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject Matcher::appendTail(java::lang::StringBuilder arg0)
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.object()
		);
	}
	jint Matcher::end()
	{
		return callMethod<jint>(
			"end",
			"()I"
		);
	}
	jint Matcher::end(jint arg0)
	{
		return callMethod<jint>(
			"end",
			"(I)I",
			arg0
		);
	}
	jint Matcher::end(jstring arg0)
	{
		return callMethod<jint>(
			"end",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean Matcher::find()
	{
		return callMethod<jboolean>(
			"find",
			"()Z"
		);
	}
	jboolean Matcher::find(jint arg0)
	{
		return callMethod<jboolean>(
			"find",
			"(I)Z",
			arg0
		);
	}
	jstring Matcher::group()
	{
		return callObjectMethod(
			"group",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Matcher::group(jint arg0)
	{
		return callObjectMethod(
			"group",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::group(jstring arg0)
	{
		return callObjectMethod(
			"group",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Matcher::groupCount()
	{
		return callMethod<jint>(
			"groupCount",
			"()I"
		);
	}
	jboolean Matcher::hasAnchoringBounds()
	{
		return callMethod<jboolean>(
			"hasAnchoringBounds",
			"()Z"
		);
	}
	jboolean Matcher::hasTransparentBounds()
	{
		return callMethod<jboolean>(
			"hasTransparentBounds",
			"()Z"
		);
	}
	jboolean Matcher::hitEnd()
	{
		return callMethod<jboolean>(
			"hitEnd",
			"()Z"
		);
	}
	jboolean Matcher::lookingAt()
	{
		return callMethod<jboolean>(
			"lookingAt",
			"()Z"
		);
	}
	jboolean Matcher::matches()
	{
		return callMethod<jboolean>(
			"matches",
			"()Z"
		);
	}
	QAndroidJniObject Matcher::pattern()
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Matcher::region(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"region",
			"(II)Ljava/util/regex/Matcher;",
			arg0,
			arg1
		);
	}
	jint Matcher::regionEnd()
	{
		return callMethod<jint>(
			"regionEnd",
			"()I"
		);
	}
	jint Matcher::regionStart()
	{
		return callMethod<jint>(
			"regionStart",
			"()I"
		);
	}
	jstring Matcher::replaceAll(jstring arg0)
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::replaceAll(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Matcher::replaceFirst(jstring arg0)
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Matcher::replaceFirst(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean Matcher::requireEnd()
	{
		return callMethod<jboolean>(
			"requireEnd",
			"()Z"
		);
	}
	QAndroidJniObject Matcher::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/regex/Matcher;"
		);
	}
	QAndroidJniObject Matcher::reset(jstring arg0)
	{
		return callObjectMethod(
			"reset",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	QAndroidJniObject Matcher::results()
	{
		return callObjectMethod(
			"results",
			"()Ljava/util/stream/Stream;"
		);
	}
	jint Matcher::start()
	{
		return callMethod<jint>(
			"start",
			"()I"
		);
	}
	jint Matcher::start(jint arg0)
	{
		return callMethod<jint>(
			"start",
			"(I)I",
			arg0
		);
	}
	jint Matcher::start(jstring arg0)
	{
		return callMethod<jint>(
			"start",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	QAndroidJniObject Matcher::toMatchResult()
	{
		return callObjectMethod(
			"toMatchResult",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	jstring Matcher::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Matcher::useAnchoringBounds(jboolean arg0)
	{
		return callObjectMethod(
			"useAnchoringBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	QAndroidJniObject Matcher::usePattern(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"usePattern",
			"(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;",
			arg0.object()
		);
	}
	QAndroidJniObject Matcher::useTransparentBounds(jboolean arg0)
	{
		return callObjectMethod(
			"useTransparentBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
} // namespace java::util::regex
