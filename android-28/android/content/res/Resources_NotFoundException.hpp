#pragma once

#include "../../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::content::res
{
	class Resources_NotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Resources_NotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Resources_NotFoundException(QJniObject obj);
		
		// Constructors
		Resources_NotFoundException();
		Resources_NotFoundException(JString arg0);
		Resources_NotFoundException(JString arg0, java::lang::Exception arg1);
		
		// Methods
	};
} // namespace android::content::res

