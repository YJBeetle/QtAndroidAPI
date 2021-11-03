#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONException.hpp"
#include "./JSONTokener.hpp"

namespace org::json
{
	// Fields
	
	// QJniObject forward
	JSONTokener::JSONTokener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JSONTokener::JSONTokener(JString arg0)
		: JObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	void JSONTokener::back() const
	{
		callMethod<void>(
			"back",
			"()V"
		);
	}
	jboolean JSONTokener::more() const
	{
		return callMethod<jboolean>(
			"more",
			"()Z"
		);
	}
	jchar JSONTokener::next() const
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar JSONTokener::next(jchar arg0) const
	{
		return callMethod<jchar>(
			"next",
			"(C)C",
			arg0
		);
	}
	JString JSONTokener::next(jint arg0) const
	{
		return callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jchar JSONTokener::nextClean() const
	{
		return callMethod<jchar>(
			"nextClean",
			"()C"
		);
	}
	JString JSONTokener::nextString(jchar arg0) const
	{
		return callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	JString JSONTokener::nextTo(jchar arg0) const
	{
		return callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	JString JSONTokener::nextTo(JString arg0) const
	{
		return callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject JSONTokener::nextValue() const
	{
		return callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;"
		);
	}
	void JSONTokener::skipPast(JString arg0) const
	{
		callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jchar JSONTokener::skipTo(jchar arg0) const
	{
		return callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0
		);
	}
	org::json::JSONException JSONTokener::syntaxError(JString arg0) const
	{
		return callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0.object<jstring>()
		);
	}
	JString JSONTokener::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::json

