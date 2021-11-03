#pragma once

#include "../../JObject.hpp"

namespace dalvik::bytecode
{
	class OpcodeInfo : public JObject
	{
	public:
		// Fields
		static jint MAXIMUM_PACKED_VALUE();
		static jint MAXIMUM_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OpcodeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OpcodeInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace dalvik::bytecode

