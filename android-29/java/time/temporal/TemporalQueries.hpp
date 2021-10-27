#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::time::temporal
{
	class TemporalQueries : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject chronology();
		static QAndroidJniObject localDate();
		static QAndroidJniObject localTime();
		static QAndroidJniObject offset();
		static QAndroidJniObject precision();
		static QAndroidJniObject zone();
		static QAndroidJniObject zoneId();
	};
} // namespace __jni_impl::java::time::temporal


namespace __jni_impl::java::time::temporal
{
	// Fields
	
	// Constructors
	void TemporalQueries::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.TemporalQueries",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TemporalQueries::chronology()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"chronology",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::localDate()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localDate",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::localTime()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localTime",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::offset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"offset",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::precision()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"precision",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::zone()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zone",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::zoneId()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zoneId",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class TemporalQueries : public __jni_impl::java::time::temporal::TemporalQueries
	{
	public:
		TemporalQueries(QAndroidJniObject obj) { __thiz = obj; }
		TemporalQueries()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

