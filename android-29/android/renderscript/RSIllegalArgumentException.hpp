#pragma once

#include "./RSRuntimeException.hpp"

class JString;

namespace android::renderscript
{
	class RSIllegalArgumentException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSIllegalArgumentException(const char *className, const char *sig, Ts...agv) : android::renderscript::RSRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSIllegalArgumentException(QJniObject obj);
		
		// Constructors
		RSIllegalArgumentException(JString arg0);
		
		// Methods
	};
} // namespace android::renderscript

