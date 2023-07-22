#pragma once

#include "../Enum.def.hpp"

class JArray;
class JString;

namespace java::lang::invoke
{
	class VarHandle_AccessMode : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::invoke::VarHandle_AccessMode COMPARE_AND_EXCHANGE();
		static java::lang::invoke::VarHandle_AccessMode COMPARE_AND_EXCHANGE_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode COMPARE_AND_EXCHANGE_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode COMPARE_AND_SET();
		static java::lang::invoke::VarHandle_AccessMode GET();
		static java::lang::invoke::VarHandle_AccessMode GET_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_ADD();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_ADD_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_ADD_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_AND();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_AND_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_AND_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_OR();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_OR_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_OR_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_XOR();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_XOR_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_BITWISE_XOR_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_SET();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_SET_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode GET_AND_SET_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode GET_OPAQUE();
		static java::lang::invoke::VarHandle_AccessMode GET_VOLATILE();
		static java::lang::invoke::VarHandle_AccessMode SET();
		static java::lang::invoke::VarHandle_AccessMode SET_OPAQUE();
		static java::lang::invoke::VarHandle_AccessMode SET_RELEASE();
		static java::lang::invoke::VarHandle_AccessMode SET_VOLATILE();
		static java::lang::invoke::VarHandle_AccessMode WEAK_COMPARE_AND_SET();
		static java::lang::invoke::VarHandle_AccessMode WEAK_COMPARE_AND_SET_ACQUIRE();
		static java::lang::invoke::VarHandle_AccessMode WEAK_COMPARE_AND_SET_PLAIN();
		static java::lang::invoke::VarHandle_AccessMode WEAK_COMPARE_AND_SET_RELEASE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VarHandle_AccessMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		VarHandle_AccessMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::invoke::VarHandle_AccessMode valueFromMethodName(JString arg0);
		static java::lang::invoke::VarHandle_AccessMode valueOf(JString arg0);
		static JArray values();
		JString methodName() const;
	};
} // namespace java::lang::invoke

