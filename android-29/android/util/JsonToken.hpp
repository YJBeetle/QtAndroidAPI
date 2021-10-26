#pragma once

#ifndef ANDROID_UTIL_JSONTOKEN
#define ANDROID_UTIL_JSONTOKEN

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::util
{
	class JsonToken : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEGIN_ARRAY();
		static QAndroidJniObject END_ARRAY();
		static QAndroidJniObject BEGIN_OBJECT();
		static QAndroidJniObject END_OBJECT();
		static QAndroidJniObject NAME();
		static QAndroidJniObject STRING();
		static QAndroidJniObject NUMBER();
		static QAndroidJniObject BOOLEAN();
		static QAndroidJniObject NULL();
		static QAndroidJniObject END_DOCUMENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject JsonToken::BEGIN_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"BEGIN_ARRAY",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::END_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"END_ARRAY",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::BEGIN_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"BEGIN_OBJECT",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::END_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"END_OBJECT",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"NAME",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"STRING",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"NUMBER",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"BOOLEAN",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::NULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"NULL",
			"Landroid/util/JsonToken;"
		);
	}
	QAndroidJniObject JsonToken::END_DOCUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"END_DOCUMENT",
			"Landroid/util/JsonToken;"
		);
	}
	
	// Constructors
	void JsonToken::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.JsonToken",
			"(V)V");
	}
	
	// Methods
	jarray JsonToken::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.JsonToken",
			"values",
			"()[Landroid/util/JsonToken;"
		).object<jarray>();
	}
	QAndroidJniObject JsonToken::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.JsonToken",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/JsonToken;",
			arg0
		);
	}
	QAndroidJniObject JsonToken::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.JsonToken",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/JsonToken;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class JsonToken : public __jni_impl::android::util::JsonToken
	{
	public:
		JsonToken(QAndroidJniObject obj) { __thiz = obj; }
		JsonToken()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_JSONTOKEN

