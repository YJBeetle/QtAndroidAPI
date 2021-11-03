#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JClass;
class JObject;
class JString;
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Enum : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Enum(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Enum(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Enum valueOf(JClass arg0, JString arg1);
		jint compareTo(java::lang::Enum arg0);
		jint compareTo(JObject arg0);
		java::util::Optional describeConstable();
		jboolean equals(JObject arg0);
		JClass getDeclaringClass();
		jint hashCode();
		JString name();
		jint ordinal();
		JString toString();
	};
} // namespace java::lang

