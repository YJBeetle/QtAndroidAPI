#pragma once

#include "../../__JniBaseClass.hpp"

namespace org::json
{
	class JSONException;
}

namespace org::json
{
	class JSONTokener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONTokener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JSONTokener(QJniObject obj);
		
		// Constructors
		JSONTokener(jstring arg0);
		
		// Methods
		static jint dehexchar(jchar arg0);
		void back();
		jboolean more();
		jchar next();
		jchar next(jchar arg0);
		jstring next(jint arg0);
		jchar nextClean();
		jstring nextString(jchar arg0);
		jstring nextTo(jchar arg0);
		jstring nextTo(jstring arg0);
		jobject nextValue();
		void skipPast(jstring arg0);
		jchar skipTo(jchar arg0);
		org::json::JSONException syntaxError(jstring arg0);
		jstring toString();
	};
} // namespace org::json

