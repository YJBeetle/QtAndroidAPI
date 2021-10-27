#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::util
{
	class Formatter_BigDecimalLayoutForm : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DECIMAL_FLOAT();
		static QAndroidJniObject SCIENTIFIC();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	QAndroidJniObject Formatter_BigDecimalLayoutForm::DECIMAL_FLOAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"DECIMAL_FLOAT",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	QAndroidJniObject Formatter_BigDecimalLayoutForm::SCIENTIFIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"SCIENTIFIC",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	
	// Constructors
	void Formatter_BigDecimalLayoutForm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter$BigDecimalLayoutForm",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Formatter_BigDecimalLayoutForm::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;",
			arg0
		);
	}
	QAndroidJniObject Formatter_BigDecimalLayoutForm::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Formatter_BigDecimalLayoutForm::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"values",
			"()[Ljava/util/Formatter$BigDecimalLayoutForm;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Formatter_BigDecimalLayoutForm : public __jni_impl::java::util::Formatter_BigDecimalLayoutForm
	{
	public:
		Formatter_BigDecimalLayoutForm(QAndroidJniObject obj) { __thiz = obj; }
		Formatter_BigDecimalLayoutForm()
		{
			__constructor();
		}
	};
} // namespace java::util

