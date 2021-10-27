#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class MessagePattern_ApostropheMode;
}
namespace __jni_impl::android::icu::text
{
	class MessagePattern_Part;
}
namespace __jni_impl::android::icu::text
{
	class MessagePattern_Part_Type;
}

namespace __jni_impl::android::icu::text
{
	class MessagePattern : public __JniBaseClass
	{
	public:
		// Fields
		static jint ARG_NAME_NOT_NUMBER();
		static jint ARG_NAME_NOT_VALID();
		static jdouble NO_NUMERIC_VALUE();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::icu::text::MessagePattern_ApostropheMode arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static jint validateArgumentName(jstring arg0);
		static jint validateArgumentName(const QString &arg0);
		jstring autoQuoteApostropheDeep();
		void clear();
		void clearPatternAndSetApostropheMode(__jni_impl::android::icu::text::MessagePattern_ApostropheMode arg0);
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jint countParts();
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		QAndroidJniObject getApostropheMode();
		jint getLimitPartIndex(jint arg0);
		jdouble getNumericValue(__jni_impl::android::icu::text::MessagePattern_Part arg0);
		QAndroidJniObject getPart(jint arg0);
		QAndroidJniObject getPartType(jint arg0);
		jint getPatternIndex(jint arg0);
		jstring getPatternString();
		jdouble getPluralOffset(jint arg0);
		jstring getSubstring(__jni_impl::android::icu::text::MessagePattern_Part arg0);
		jboolean hasNamedArguments();
		jboolean hasNumberedArguments();
		jint hashCode();
		jboolean isFrozen();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parseChoiceStyle(jstring arg0);
		QAndroidJniObject parseChoiceStyle(const QString &arg0);
		QAndroidJniObject parsePluralStyle(jstring arg0);
		QAndroidJniObject parsePluralStyle(const QString &arg0);
		QAndroidJniObject parseSelectStyle(jstring arg0);
		QAndroidJniObject parseSelectStyle(const QString &arg0);
		jboolean partSubstringMatches(__jni_impl::android::icu::text::MessagePattern_Part arg0, jstring arg1);
		jboolean partSubstringMatches(__jni_impl::android::icu::text::MessagePattern_Part arg0, const QString &arg1);
		jstring toString();
	};
} // namespace __jni_impl::android::icu::text

#include "./MessagePattern_ApostropheMode.hpp"
#include "./MessagePattern_Part.hpp"
#include "./MessagePattern_Part_Type.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint MessagePattern::ARG_NAME_NOT_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_NUMBER"
		);
	}
	jint MessagePattern::ARG_NAME_NOT_VALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_VALID"
		);
	}
	jdouble MessagePattern::NO_NUMERIC_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"android.icu.text.MessagePattern",
			"NO_NUMERIC_VALUE"
		);
	}
	
	// Constructors
	void MessagePattern::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern",
			"()V"
		);
	}
	void MessagePattern::__constructor(__jni_impl::android::icu::text::MessagePattern_ApostropheMode arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.__jniObject().object()
		);
	}
	void MessagePattern::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MessagePattern::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint MessagePattern::validateArgumentName(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.MessagePattern",
			"validateArgumentName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint MessagePattern::validateArgumentName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.MessagePattern",
			"validateArgumentName",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MessagePattern::autoQuoteApostropheDeep()
	{
		return __thiz.callObjectMethod(
			"autoQuoteApostropheDeep",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MessagePattern::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MessagePattern::clearPatternAndSetApostropheMode(__jni_impl::android::icu::text::MessagePattern_ApostropheMode arg0)
	{
		__thiz.callMethod<void>(
			"clearPatternAndSetApostropheMode",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.__jniObject().object()
		);
	}
	jobject MessagePattern::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject MessagePattern::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	jint MessagePattern::countParts()
	{
		return __thiz.callMethod<jint>(
			"countParts",
			"()I"
		);
	}
	jboolean MessagePattern::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	QAndroidJniObject MessagePattern::getApostropheMode()
	{
		return __thiz.callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	jint MessagePattern::getLimitPartIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLimitPartIndex",
			"(I)I",
			arg0
		);
	}
	jdouble MessagePattern::getNumericValue(__jni_impl::android::icu::text::MessagePattern_Part arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getNumericValue",
			"(Landroid/icu/text/MessagePattern$Part;)D",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MessagePattern::getPart(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPart",
			"(I)Landroid/icu/text/MessagePattern$Part;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::getPartType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPartType",
			"(I)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0
		);
	}
	jint MessagePattern::getPatternIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPatternIndex",
			"(I)I",
			arg0
		);
	}
	jstring MessagePattern::getPatternString()
	{
		return __thiz.callObjectMethod(
			"getPatternString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble MessagePattern::getPluralOffset(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getPluralOffset",
			"(I)D",
			arg0
		);
	}
	jstring MessagePattern::getSubstring(__jni_impl::android::icu::text::MessagePattern_Part arg0)
	{
		return __thiz.callObjectMethod(
			"getSubstring",
			"(Landroid/icu/text/MessagePattern$Part;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean MessagePattern::hasNamedArguments()
	{
		return __thiz.callMethod<jboolean>(
			"hasNamedArguments",
			"()Z"
		);
	}
	jboolean MessagePattern::hasNumberedArguments()
	{
		return __thiz.callMethod<jboolean>(
			"hasNumberedArguments",
			"()Z"
		);
	}
	jint MessagePattern::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MessagePattern::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject MessagePattern::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MessagePattern::parseChoiceStyle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parseChoiceStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::parseChoiceStyle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parseChoiceStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MessagePattern::parsePluralStyle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parsePluralStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::parsePluralStyle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parsePluralStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MessagePattern::parseSelectStyle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parseSelectStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern::parseSelectStyle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parseSelectStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean MessagePattern::partSubstringMatches(__jni_impl::android::icu::text::MessagePattern_Part arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"partSubstringMatches",
			"(Landroid/icu/text/MessagePattern$Part;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean MessagePattern::partSubstringMatches(__jni_impl::android::icu::text::MessagePattern_Part arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"partSubstringMatches",
			"(Landroid/icu/text/MessagePattern$Part;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring MessagePattern::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessagePattern : public __jni_impl::android::icu::text::MessagePattern
	{
	public:
		MessagePattern(QAndroidJniObject obj) { __thiz = obj; }
		MessagePattern()
		{
			__constructor();
		}
		MessagePattern(__jni_impl::android::icu::text::MessagePattern_ApostropheMode arg0)
		{
			__constructor(
				arg0);
		}
		MessagePattern(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

