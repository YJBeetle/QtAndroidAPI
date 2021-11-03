#include "./JSONException.hpp"
#include "./JSONTokener.hpp"

namespace org::json
{
	// Fields
	
	// QJniObject forward
	JSONTokener::JSONTokener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JSONTokener::JSONTokener(jstring arg0)
		: JObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint JSONTokener::dehexchar(jchar arg0)
	{
		return callStaticMethod<jint>(
			"org.json.JSONTokener",
			"dehexchar",
			"(C)I",
			arg0
		);
	}
	void JSONTokener::back()
	{
		callMethod<void>(
			"back",
			"()V"
		);
	}
	jboolean JSONTokener::more()
	{
		return callMethod<jboolean>(
			"more",
			"()Z"
		);
	}
	jchar JSONTokener::next()
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar JSONTokener::next(jchar arg0)
	{
		return callMethod<jchar>(
			"next",
			"(C)C",
			arg0
		);
	}
	jstring JSONTokener::next(jint arg0)
	{
		return callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jchar JSONTokener::nextClean()
	{
		return callMethod<jchar>(
			"nextClean",
			"()C"
		);
	}
	jstring JSONTokener::nextString(jchar arg0)
	{
		return callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(jchar arg0)
	{
		return callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(jstring arg0)
	{
		return callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject JSONTokener::nextValue()
	{
		return callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void JSONTokener::skipPast(jstring arg0)
	{
		callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jchar JSONTokener::skipTo(jchar arg0)
	{
		return callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0
		);
	}
	org::json::JSONException JSONTokener::syntaxError(jstring arg0)
	{
		return callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0
		);
	}
	jstring JSONTokener::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace org::json

