#pragma once

#ifndef JAVA_TIME_TEMPORAL_JULIANFIELDS
#define JAVA_TIME_TEMPORAL_JULIANFIELDS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::time::temporal
{
	class JulianFields : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject JULIAN_DAY();
		static QAndroidJniObject MODIFIED_JULIAN_DAY();
		static QAndroidJniObject RATA_DIE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::time::temporal


namespace __jni_impl::java::time::temporal
{
	// Fields
	QAndroidJniObject JulianFields::JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject JulianFields::MODIFIED_JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"MODIFIED_JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject JulianFields::RATA_DIE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"RATA_DIE",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// Constructors
	void JulianFields::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.JulianFields",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class JulianFields : public __jni_impl::java::time::temporal::JulianFields
	{
	public:
		JulianFields(QAndroidJniObject obj) { __thiz = obj; }
		JulianFields()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_JULIANFIELDS

