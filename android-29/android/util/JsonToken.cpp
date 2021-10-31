#include "./JsonToken.hpp"

namespace android::util
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
	QAndroidJniObject JsonToken::BEGIN_OBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"BEGIN_OBJECT",
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
	QAndroidJniObject JsonToken::END_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"END_ARRAY",
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
	QAndroidJniObject JsonToken::_NULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"NULL",
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
	QAndroidJniObject JsonToken::STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.JsonToken",
			"STRING",
			"Landroid/util/JsonToken;"
		);
	}
	
	JsonToken::JsonToken(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject JsonToken::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.JsonToken",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/JsonToken;",
			arg0
		);
	}
	jarray JsonToken::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.JsonToken",
			"values",
			"()[Landroid/util/JsonToken;"
		).object<jarray>();
	}
} // namespace android::util

