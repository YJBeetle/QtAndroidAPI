#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::util::concurrent
{
	class Future_State : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::concurrent::Future_State CANCELLED();
		static java::util::concurrent::Future_State FAILED();
		static java::util::concurrent::Future_State RUNNING();
		static java::util::concurrent::Future_State SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit Future_State(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Future_State(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::concurrent::Future_State valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::util::concurrent

