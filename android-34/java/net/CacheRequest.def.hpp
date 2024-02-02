#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class OutputStream;
}

namespace java::net
{
	class CacheRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CacheRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CacheRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CacheRequest();
		
		// Methods
		void abort() const;
		java::io::OutputStream getBody() const;
	};
} // namespace java::net

