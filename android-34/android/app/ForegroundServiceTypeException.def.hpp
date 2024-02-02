#pragma once

#include "./ServiceStartNotAllowedException.def.hpp"

class JString;

namespace android::app
{
	class ForegroundServiceTypeException : public android::app::ServiceStartNotAllowedException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ForegroundServiceTypeException(const char *className, const char *sig, Ts...agv) : android::app::ServiceStartNotAllowedException(className, sig, std::forward<Ts>(agv)...) {}
		ForegroundServiceTypeException(QJniObject obj) : android::app::ServiceStartNotAllowedException(obj) {}
		
		// Constructors
		ForegroundServiceTypeException(JString arg0);
		
		// Methods
	};
} // namespace android::app

