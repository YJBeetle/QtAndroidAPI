#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace java::lang::annotation
{
	class ElementType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ANNOTATION_TYPE();
		static QAndroidJniObject CONSTRUCTOR();
		static QAndroidJniObject FIELD();
		static QAndroidJniObject LOCAL_VARIABLE();
		static QAndroidJniObject _METHOD();
		static QAndroidJniObject MODULE();
		static QAndroidJniObject PACKAGE();
		static QAndroidJniObject PARAMETER();
		static QAndroidJniObject RECORD_COMPONENT();
		static QAndroidJniObject TYPE();
		static QAndroidJniObject TYPE_PARAMETER();
		static QAndroidJniObject TYPE_USE();
		
		ElementType(QAndroidJniObject obj);
		// Constructors
		ElementType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::lang::annotation

