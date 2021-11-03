#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Boolean : public JObject
	{
	public:
		// Fields
		static java::lang::Boolean FALSE();
		static java::lang::Boolean TRUE();
		static JClass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Boolean(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Boolean(QJniObject obj);
		
		// Constructors
		Boolean(jboolean arg0);
		Boolean(JString arg0);
		
		// Methods
		static jint compare(jboolean arg0, jboolean arg1);
		static jboolean getBoolean(JString arg0);
		static jint hashCode(jboolean arg0);
		static jboolean logicalAnd(jboolean arg0, jboolean arg1);
		static jboolean logicalOr(jboolean arg0, jboolean arg1);
		static jboolean logicalXor(jboolean arg0, jboolean arg1);
		static jboolean parseBoolean(JString arg0);
		static JString toString(jboolean arg0);
		static java::lang::Boolean valueOf(jboolean arg0);
		static java::lang::Boolean valueOf(JString arg0);
		jboolean booleanValue() const;
		jint compareTo(java::lang::Boolean arg0) const;
		jint compareTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::lang

