#pragma once

#include "../../__JniBaseClass.hpp"


namespace dalvik::bytecode
{
	class OpcodeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAXIMUM_PACKED_VALUE();
		static jint MAXIMUM_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit OpcodeInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OpcodeInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace dalvik::bytecode

