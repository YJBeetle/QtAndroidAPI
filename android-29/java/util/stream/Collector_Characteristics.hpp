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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Collector_Characteristics(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Collector_Characteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util::stream

