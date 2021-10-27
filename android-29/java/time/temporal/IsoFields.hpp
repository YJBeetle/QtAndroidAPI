#pragma once

#ifndef JAVA_TIME_TEMPORAL_ISOFIELDS
#define JAVA_TIME_TEMPORAL_ISOFIELDS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::time::temporal
{
	class IsoFields : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DAY_OF_QUARTER();
		static QAndroidJniObject QUARTER_OF_YEAR();
		static QAndroidJniObject QUARTER_YEARS();
		static QAndroidJniObject WEEK_BASED_YEAR();
		static QAndroidJniObject WEEK_BASED_YEARS();
		static QAndroidJniObject WEEK_OF_WEEK_BASED_YEAR();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::time::temporal


namespace __jni_impl::java::time::temporal
{
	// Fields
	QAndroidJniObject IsoFields::DAY_OF_QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"DAY_OF_QUARTER",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::QUARTER_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_OF_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::QUARTER_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_BASED_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_BASED_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_OF_WEEK_BASED_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_OF_WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// Constructors
	void IsoFields::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.IsoFields",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class IsoFields : public __jni_impl::java::time::temporal::IsoFields
	{
	public:
		IsoFields(QAndroidJniObject obj) { __thiz = obj; }
		IsoFields()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_ISOFIELDS

