#include "./SignStyle.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::SignStyle SignStyle::ALWAYS()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"ALWAYS",
			"Ljava/time/format/SignStyle;"
		);
	}
	java::time::format::SignStyle SignStyle::EXCEEDS_PAD()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"EXCEEDS_PAD",
			"Ljava/time/format/SignStyle;"
		);
	}
	java::time::format::SignStyle SignStyle::NEVER()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NEVER",
			"Ljava/time/format/SignStyle;"
		);
	}
	java::time::format::SignStyle SignStyle::NORMAL()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NORMAL",
			"Ljava/time/format/SignStyle;"
		);
	}
	java::time::format::SignStyle SignStyle::NOT_NEGATIVE()
	{
		return getStaticObjectField(
			"java.time.format.SignStyle",
			"NOT_NEGATIVE",
			"Ljava/time/format/SignStyle;"
		);
	}
	
	// QAndroidJniObject forward
	SignStyle::SignStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::format::SignStyle SignStyle::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			arg0
		);
	}
	jarray SignStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.SignStyle",
			"values",
			"()[Ljava/time/format/SignStyle;"
		).object<jarray>();
	}
} // namespace java::time::format

