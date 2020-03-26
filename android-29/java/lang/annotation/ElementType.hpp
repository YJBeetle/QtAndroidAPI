#pragma once

#ifndef JAVA_LANG_ANNOTATION_ELEMENTTYPE
#define JAVA_LANG_ANNOTATION_ELEMENTTYPE

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace __jni_impl::java::lang::annotation
{
	class ElementType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject TYPE();
		static QAndroidJniObject FIELD();
		static QAndroidJniObject METHOD();
		static QAndroidJniObject PARAMETER();
		static QAndroidJniObject CONSTRUCTOR();
		static QAndroidJniObject LOCAL_VARIABLE();
		static QAndroidJniObject ANNOTATION_TYPE();
		static QAndroidJniObject PACKAGE();
		static QAndroidJniObject TYPE_PARAMETER();
		static QAndroidJniObject TYPE_USE();
		static QAndroidJniObject MODULE();
		
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
	QAndroidJniObject ElementType::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::FIELD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"FIELD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"METHOD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::PARAMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::CONSTRUCTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"CONSTRUCTOR",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::LOCAL_VARIABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"LOCAL_VARIABLE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::ANNOTATION_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"ANNOTATION_TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PACKAGE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::TYPE_PARAMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::TYPE_USE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_USE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	QAndroidJniObject ElementType::MODULE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"MODULE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	
	// Constructors
	void ElementType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.ElementType",
			"(V)V");
	}
	
	// Methods
	jarray ElementType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"values",
			"()[Ljava/lang/annotation/ElementType;"
		).object<jarray>();
	}
	QAndroidJniObject ElementType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/ElementType;",
			arg0
		);
	}
} // namespace __jni_impl::java::lang::annotation

namespace java::lang::annotation
{
	class ElementType : public __jni_impl::java::lang::annotation::ElementType
	{
	public:
		ElementType(QAndroidJniObject obj) { __thiz = obj; }
		ElementType()
		{
			__constructor();
		}
	};
} // namespace java::lang::annotation

#endif // JAVA_LANG_ANNOTATION_ELEMENTTYPE

