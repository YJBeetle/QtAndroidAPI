#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::util::stream
{
	class Collector_Characteristics : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONCURRENT();
		static QAndroidJniObject IDENTITY_FINISH();
		static QAndroidJniObject UNORDERED();
		
		Collector_Characteristics(QAndroidJniObject obj);
		// Constructors
		Collector_Characteristics() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::util::stream

