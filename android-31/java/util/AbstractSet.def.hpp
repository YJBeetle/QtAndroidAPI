#pragma once

#include "./AbstractCollection.def.hpp"

class JObject;

namespace java::util
{
	class AbstractSet : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSet(QJniObject obj) : java::util::AbstractCollection(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean removeAll(JObject arg0) const;
	};
} // namespace java::util

