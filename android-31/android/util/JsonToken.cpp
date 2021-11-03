#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./JsonToken.hpp"

namespace android::util
{
	// Fields
	android::util::JsonToken JsonToken::BEGIN_ARRAY()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"BEGIN_ARRAY",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::BEGIN_OBJECT()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"BEGIN_OBJECT",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::BOOLEAN()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"BOOLEAN",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::END_ARRAY()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"END_ARRAY",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::END_DOCUMENT()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"END_DOCUMENT",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::END_OBJECT()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"END_OBJECT",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::NAME()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"NAME",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::_NULL()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"NULL",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::NUMBER()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"NUMBER",
			"Landroid/util/JsonToken;"
		);
	}
	android::util::JsonToken JsonToken::STRING()
	{
		return getStaticObjectField(
			"android.util.JsonToken",
			"STRING",
			"Landroid/util/JsonToken;"
		);
	}
	
	// QAndroidJniObject forward
	JsonToken::JsonToken(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::util::JsonToken JsonToken::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.JsonToken",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/JsonToken;",
			arg0.object<jstring>()
		);
	}
	JArray JsonToken::values()
	{
		return callStaticObjectMethod(
			"android.util.JsonToken",
			"values",
			"()[Landroid/util/JsonToken;"
		);
	}
} // namespace android::util

