#pragma once

#include "../../../../JObject.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::util::concurrent::locks
{
	class AbstractOwnableSynchronizer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractOwnableSynchronizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractOwnableSynchronizer(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::util::concurrent::locks

