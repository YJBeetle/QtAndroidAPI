#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::nio
{
	class ByteOrder : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BIG_ENDIAN();
		static QAndroidJniObject LITTLE_ENDIAN();
		
		ByteOrder(QAndroidJniObject obj);
		// Constructors
		ByteOrder() = default;
		
		// Methods
		static QAndroidJniObject nativeOrder();
		jstring toString();
	};
} // namespace java::nio

