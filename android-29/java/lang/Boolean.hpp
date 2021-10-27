#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Boolean : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FALSE();
		static QAndroidJniObject TRUE();
		static jclass TYPE();
		
		Boolean(QAndroidJniObject obj);
		// Constructors
		Boolean(jboolean &arg0);
		Boolean(jstring &arg0);
		Boolean(const QString &arg0);
		Boolean() = default;
		
		// Methods
		static jint compare(jboolean arg0, jboolean arg1);
		static jboolean getBoolean(jstring arg0);
		static jboolean getBoolean(const QString &arg0);
		static jint hashCode(jboolean arg0);
		static jboolean logicalAnd(jboolean arg0, jboolean arg1);
		static jboolean logicalOr(jboolean arg0, jboolean arg1);
		static jboolean logicalXor(jboolean arg0, jboolean arg1);
		static jboolean parseBoolean(jstring arg0);
		static jboolean parseBoolean(const QString &arg0);
		static jstring toString(jboolean arg0);
		static QAndroidJniObject valueOf(jboolean arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jboolean booleanValue();
		jint compareTo(java::lang::Boolean arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::lang

