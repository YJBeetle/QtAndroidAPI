#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace org::json
{
	class JSONException;
}

namespace org::json
{
	class JSONTokener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONTokener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONTokener(QJniObject obj);
		
		// Constructors
		JSONTokener(JString arg0);
		
		// Methods
		static jint dehexchar(jchar arg0);
		void back();
		jboolean more();
		jchar next();
		jchar next(jchar arg0);
		JString next(jint arg0);
		jchar nextClean();
		JString nextString(jchar arg0);
		JString nextTo(jchar arg0);
		JString nextTo(JString arg0);
		JObject nextValue();
		void skipPast(JString arg0);
		jchar skipTo(jchar arg0);
		org::json::JSONException syntaxError(JString arg0);
		JString toString();
	};
} // namespace org::json

