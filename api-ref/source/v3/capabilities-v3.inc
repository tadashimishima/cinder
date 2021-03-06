.. -*- rst -*-

=================================================
Capabilities for storage back ends (capabilities)
=================================================

Shows capabilities for a storage back end.


Show all back-end capabilities
==============================

.. rest_method::  GET /v3/{tenant_id}/capabilities/{host}

Shows capabilities for a storage back end on the host.
The ``host`` takes the form of ``hostname@volume_backend_name``.

Normal response codes: 200
Error response codes:

Request
-------

.. rest_parameters:: parameters.yaml

   - tenant_id: tenant_id
   - hostname: hostname

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - pool_name: pool_name
   - description: description
   - volume_backend_name: volume_backend_name
   - namespace: namespace
   - visibility: visibility
   - driver_version: driver_version
   - vendor_name: vendor_name
   - properties: properties
   - storage_protocol: storage_protocol

Response Example
----------------

.. literalinclude:: ./samples/backend-capabilities-response.json
   :language: javascript
