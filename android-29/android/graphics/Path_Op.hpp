#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_Op : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject INTERSECT();
		static QAndroidJniObject REVERSE_DIFFERENCE();
		static QAndroidJniObject UNION();
		static QAndroidJniObject XOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Path_Op(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Path_Op(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

