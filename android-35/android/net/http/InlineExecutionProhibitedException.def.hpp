#pragma once

#include "../../../java/util/concurrent/RejectedExecutionException.def.hpp"

namespace android::net::http
{
	class InlineExecutionProhibitedException : public java::util::concurrent::RejectedExecutionException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineExecutionProhibitedException(const char *className, const char *sig, Ts...agv) : java::util::concurrent::RejectedExecutionException(className, sig, std::forward<Ts>(agv)...) {}
		InlineExecutionProhibitedException(QJniObject obj) : java::util::concurrent::RejectedExecutionException(obj) {}
		
		// Constructors
		InlineExecutionProhibitedException();
		
		// Methods
	};
} // namespace android::net::http

