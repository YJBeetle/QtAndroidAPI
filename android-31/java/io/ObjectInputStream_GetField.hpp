#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectStreamClass;
}
class JObject;
class JString;

namespace java::io
{
	class ObjectInputStream_GetField : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectInputStream_GetField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectInputStream_GetField(QJniObject obj);
		
		// Constructors
		ObjectInputStream_GetField();
		
		// Methods
		jboolean defaulted(JString arg0);
		jboolean get(JString arg0, jboolean arg1);
		jbyte get(JString arg0, jbyte arg1);
		jchar get(JString arg0, jchar arg1);
		jdouble get(JString arg0, jdouble arg1);
		jfloat get(JString arg0, jfloat arg1);
		jint get(JString arg0, jint arg1);
		JObject get(JString arg0, JObject arg1);
		jlong get(JString arg0, jlong arg1);
		jshort get(JString arg0, jshort arg1);
		java::io::ObjectStreamClass getObjectStreamClass();
	};
} // namespace java::io

