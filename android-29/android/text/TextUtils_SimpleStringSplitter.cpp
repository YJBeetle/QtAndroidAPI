#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TextUtils_SimpleStringSplitter.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(jchar arg0)
		: JObject(
			"android.text.TextUtils$SimpleStringSplitter",
			"(C)V",
			arg0
		) {}
	
	// Methods
	jboolean TextUtils_SimpleStringSplitter::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	JObject TextUtils_SimpleStringSplitter::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JString TextUtils_SimpleStringSplitter::next() const
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		);
	}
	void TextUtils_SimpleStringSplitter::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void TextUtils_SimpleStringSplitter::setString(JString arg0) const
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

