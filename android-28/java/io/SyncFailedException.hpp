#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class SyncFailedException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncFailedException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		SyncFailedException(QJniObject obj);
		
		// Constructors
		SyncFailedException(JString arg0);
		
		// Methods
	};
} // namespace java::io

