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
		
		JSONTokener(QAndroidJniObject obj);
		// Constructors
		JSONTokener(jstring &arg0);
		JSONTokener(const QString &arg0);
		JSONTokener() = default;
		
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
		jstring nextTo(const QString &arg0);
		jobject nextValue();
		void skipPast(jstring arg0);
		void skipPast(const QString &arg0);
		jchar skipTo(jchar arg0);
		QAndroidJniObject syntaxError(jstring arg0);
		QAndroidJniObject syntaxError(const QString &arg0);
		jstring toString();
	};
} // namespace org::json

