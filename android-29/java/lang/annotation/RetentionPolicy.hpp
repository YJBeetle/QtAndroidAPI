#pragma once

#ifndef JAVA_LANG_ANNOTATION_RETENTIONPOLICY
#define JAVA_LANG_ANNOTATION_RETENTIONPOLICY

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace __jni_impl::java::lang::annotation
{
	class RetentionPolicy : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject SOURCE();
		static QAndroidJniObject CLASS();
		static QAndroidJniObject RUNTIME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::lang::annotation


namespace __jni_impl::java::lang::annotation
{
	// Fields
	QAndroidJniObject RetentionPolicy::SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"SOURCE",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	QAndroidJniObject RetentionPolicy::CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"CLASS",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	QAndroidJniObject RetentionPolicy::RUNTIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"RUNTIME",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	
	// Constructors
	void RetentionPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.RetentionPolicy",
			"(V)V");
	}
	
	// Methods
	jarray RetentionPolicy::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"values",
			"()[Ljava/lang/annotation/RetentionPolicy;"
		).object<jarray>();
	}
	QAndroidJniObject RetentionPolicy::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;",
			arg0
		);
	}
} // namespace __jni_impl::java::lang::annotation

namespace java::lang::annotation
{
	class RetentionPolicy : public __jni_impl::java::lang::annotation::RetentionPolicy
	{
	public:
		RetentionPolicy(QAndroidJniObject obj) { __thiz = obj; }
		RetentionPolicy()
		{
			__constructor();
		}
	};
} // namespace java::lang::annotation

#endif // JAVA_LANG_ANNOTATION_RETENTIONPOLICY

