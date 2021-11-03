#pragma once

#include "../../JObject.hpp"

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
		static jclass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Boolean(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Boolean(QAndroidJniObject obj);
		
		// Constructors
		Boolean(jboolean arg0);
		Boolean(jstring arg0);
		
		// Methods
		static jint compare(jboolean arg0, jboolean arg1);
		static jboolean getBoolean(jstring arg0);
		static jint hashCode(jboolean arg0);
		static jboolean logicalAnd(jboolean arg0, jboolean arg1);
		static jboolean logicalOr(jboolean arg0, jboolean arg1);
		static jboolean logicalXor(jboolean arg0, jboolean arg1);
		static jboolean parseBoolean(jstring arg0);
		static jstring toString(jboolean arg0);
		static java::lang::Boolean valueOf(jboolean arg0);
		static java::lang::Boolean valueOf(jstring arg0);
		jboolean booleanValue();
		jint compareTo(java::lang::Boolean arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::lang

