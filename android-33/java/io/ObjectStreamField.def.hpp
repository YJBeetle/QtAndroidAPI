#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectStreamField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamField(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ObjectStreamField(JString arg0, JClass arg1);
		ObjectStreamField(JString arg0, JClass arg1, jboolean arg2);
		
		// Methods
		jint compareTo(JObject arg0) const;
		JString getName() const;
		jint getOffset() const;
		JClass getType() const;
		jchar getTypeCode() const;
		JString getTypeString() const;
		jboolean isPrimitive() const;
		jboolean isUnshared() const;
		JString toString() const;
	};
} // namespace java::io

