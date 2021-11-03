#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::lang::reflect
{
	class Field;
}

namespace java::io
{
	class ObjectStreamField : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectStreamField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamField(QAndroidJniObject obj);
		
		// Constructors
		ObjectStreamField(JString arg0, JClass arg1);
		ObjectStreamField(JString arg0, JClass arg1, jboolean arg2);
		
		// Methods
		jint compareTo(JObject arg0);
		JString getName();
		jint getOffset();
		JClass getType();
		jchar getTypeCode();
		JString getTypeString();
		jboolean isPrimitive();
		jboolean isUnshared();
		JString toString();
	};
} // namespace java::io

