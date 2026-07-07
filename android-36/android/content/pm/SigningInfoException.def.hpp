#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::content::pm
{
	class SigningInfoException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SigningInfoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SigningInfoException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
		jint getCode() const;
	};
} // namespace android::content::pm

