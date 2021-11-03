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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JSONTokener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONTokener(QAndroidJniObject obj);
		
		// Constructors
		JSONTokener(JString arg0);
		
		// Methods
		static jint dehexchar(jchar arg0);
		void back() const;
		jboolean more() const;
		jchar next() const;
		jchar next(jchar arg0) const;
		JString next(jint arg0) const;
		jchar nextClean() const;
		JString nextString(jchar arg0) const;
		JString nextTo(jchar arg0) const;
		JString nextTo(JString arg0) const;
		JObject nextValue() const;
		void skipPast(JString arg0) const;
		jchar skipTo(jchar arg0) const;
		org::json::JSONException syntaxError(JString arg0) const;
		JString toString() const;
	};
} // namespace org::json

